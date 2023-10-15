using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Registration_Form
{
    public partial class Submission_Form : Form
    {
        String N, R, G, B, C;
        DateTime D;
        public Submission_Form(String name, String Reg, String gender, String Branch, DateTime Date, String Clubs)
        {
           
           
            InitializeComponent();
            this.N = name;
            this.R = Reg;
            this.G = gender;
            this.D = Date;
            this.C = Clubs;
           
        }

        private void Submission_Form_Load(object sender, EventArgs e)
        {
            label1.Text = "Information has been recieved \n\n" + N + "\n\n" + R + "\n\n" + G + "\n\n" + D + "\n\n" + C;
        }
    }
}
