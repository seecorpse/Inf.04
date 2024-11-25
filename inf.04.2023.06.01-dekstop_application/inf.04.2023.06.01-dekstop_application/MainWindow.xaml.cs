using System;
using System.Text.RegularExpressions;
using System.Windows;

namespace ParcelApp
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            UpdatePrice();
        }
        private void btnCheckPrice_Click(object sender, RoutedEventArgs e)
        {
            UpdatePrice();
        }
        private void btnSubmit_Click(object sender, RoutedEventArgs e)
        {
            string postalCode = txtPostalCode.Text;
            if (!Regex.IsMatch(postalCode, @"^\d{5}$"))
            {
                if (postalCode.Length != 5)
                {
                    MessageBox.Show("Nieprawidłowa liczba cyfr w kodzie pocztowym");
                }
                else
                {
                    MessageBox.Show("Kod pocztowy powinien się składać z samych cyfr");
                }
            }
            else
            {
                MessageBox.Show("Dane przesyłki zostały wprowadzone");
            }
        }
        private void UpdatePrice()
        {
            if (rbPostcard.IsChecked == true)
            {
                lblPrice.Text = "Cena: 1 zł";
            }
            else if (rbLetter.IsChecked == true)
            {
                lblPrice.Text = "Cena: 1,5 zł";
            }
            else if (rbPackage.IsChecked == true)
            {
                lblPrice.Text = "Cena: 10 zł";
            }
        }
    }
}
