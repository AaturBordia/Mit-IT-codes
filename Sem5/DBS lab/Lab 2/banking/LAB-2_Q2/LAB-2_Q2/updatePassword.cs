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
    public partial class updatePassword : Form
    {
        public updatePassword()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "" || textBox1.Text != Form1.password)
            {
                MessageBox.Show("Invalid Password!!", "HDFC BANK");
            }
            else if (textBox2.Text != textBox3.Text)
            {
                MessageBox.Show("Passwords DO NOT MATCH!!", "HDFC BANK");
            }
            else {
                Form1.password = textBox2.Text;
                this.Hide();
                Form1 form1 = new Form1();
                form1.Show();
            }
        }
    }
}
