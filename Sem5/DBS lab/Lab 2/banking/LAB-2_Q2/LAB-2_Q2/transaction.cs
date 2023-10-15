using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LAB_2_Q2
{
    public partial class transaction : Form
    {
        public transaction()
        {
            InitializeComponent();
        }
        public static string name;
        public static int accountNo;
        public static int amount;

        private void button1_Click(object sender, EventArgs e)
        {
      
            int balance = Form1.Balance;
            name = textBox1.Text;
            accountNo = int.Parse(textBox2.Text);
            amount = int.Parse(textBox3.Text);

            if (balance - amount >= 0) {
                balance -= amount;
                MessageBox.Show("Amount transferred : " +  amount + "\nBalance Remaining : " + balance);
                Form1 f1 = new Form1();
                f1.Show();
                int[] f2 = Form2.transactions;
                f2[f2.Length - 1] = amount;
                this.Hide();
            }
            else
            {
                MessageBox.Show("Amount to send is too high");
            }



        }
    }
}
