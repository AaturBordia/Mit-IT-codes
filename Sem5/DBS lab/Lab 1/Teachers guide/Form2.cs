using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form2 : Form{
        String Personname,rc,cc,c;
    
        public Form2(String name, String radiochoice, String checkchoice, String combo)
        {
            InitializeComponent();
             Personname = name;
             rc = radiochoice;
             cc = checkchoice;
             c = combo;
        }

        private void Form2_Load(object sender, EventArgs e)
        {
           label1.Text="Information you entered are as follows:\n\n"+"Name:" +Personname+"\n"+"Gender:" +rc+"\n"+"Hobbies:" +cc+"\n"+"Region:" +c+"\n";
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
