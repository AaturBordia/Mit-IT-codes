$(document).ready(function() {
    var inventoryData = {
        "inventory": [
            { "id": 1, "name": "Paracetamol", "quantity": 100, "price": 1000},
            { "id": 2, "name": "Dolo", "quantity": 50, "price": 200 },
            { "id": 3, "name": "Crocin", "quantity": 20, "price": 300 },
            { "id": 4, "name": "Digene", "quantity": 40, "price": 600 },
            // Add more items as needed
        ]
    };

    function displayInventory() {
        $("#inventory-list").empty();

        $.each(inventoryData.inventory, function(index, item) {
            var row = `<tr>
                           <td>${item.id}</td>
                           <td>${item.name}</td>
                           <td>${item.quantity}</td>
                           <td>${item.price}</td>
                           <td><button class="delete-btn" data-id="${item.id}">Delete</button></td>
                       </tr>`;
            $("#inventory-list").append(row);
        });
    }

    function deleteItem(itemId) {
        var index = inventoryData.inventory.findIndex(item => item.id == itemId);
        if (index !== -1) {
            inventoryData.inventory.splice(index, 1);
            displayInventory();
        }
    }

    $("#add-item-form").submit(function(event) {
        event.preventDefault();

        var newItem = {
            "id": $("#item-id").val(),
            "name": $("#item-name").val(),
            "quantity": $("#item-quantity").val(),
            "price": $("#item-price").val()
        };

        inventoryData.inventory.push(newItem);
        displayInventory();

        $("#add-item-form")[0].reset();
    });

    // Event delegation for delete button clicks
    $("#inventory-list").on("click", ".delete-btn", function() {
        var itemId = $(this).data("id");
        deleteItem(itemId);
    });

    displayInventory();
});
