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
    public partial class Form2 : Form
    {
        public static string username = Form1.username;
        public static string password = Form1.password;
        public static string LAC = DateTime.Now.ToString();
        public static int balance = Form1.Balance;
        public static int[] transactions = { 2000, 3000, 4000, 5000, 6000};
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            label8.Text = username;
            label9.Text = balance.ToString() + "Rs";
            label10.Text = LAC;
            string result = "";
            for (int i = 0; i < transactions.Length; i++)
            {
                result = transactions[i].ToString() + "Rs\n";
                listView1.Items.Add(result);
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label8_Click(object sender, EventArgs e)
        {

        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            transaction t1 = new transaction();
            t1.Show();
            
        }
    }
}
