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

    public partial class Form1 : Form
    {
        public static string username = "210911340";
        public static string password = "Hello123";
        public static int Balance = 100000;


        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "") {
                MessageBox.Show("Enter Username!!", "HDFC BANK");                
            }
            else if (textBox2.Text == "") {
                MessageBox.Show("Enter Password!!", "HDFC BANK");
            }
            else if (textBox1.Text == username && textBox2.Text == password)
            {
                this.Hide();
                Form2 form2 = new Form2();
                form2.ShowDialog();
            }
            else {
                MessageBox.Show("Invalid credentials", "HDFC BANK");
                textBox1.Text = "";
                textBox2.Text = "";
            }
            
         }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            if (textBox1.Text == username)
            {
                this.Hide();
                updatePassword updPass = new updatePassword();
                updPass.ShowDialog();
            }
            else {
                MessageBox.Show("Enter Username!!", "HDFC BANK"); 
            }

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
