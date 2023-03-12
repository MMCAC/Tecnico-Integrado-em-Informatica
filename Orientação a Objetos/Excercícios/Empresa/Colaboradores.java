package Empresa;

/*Parabéns, você foi a pessoa contratada para criar o módulo de um sistema que gerencia os colaboradores de uma empresa.
Abaixo seguem as informações do módulo a ser desenvolvido.
O sistema deve distinguir os três cargos existentes na empresa: Estagiário, Vendedor e Gerente.
Todos estes colaboradores possuem as seguintes informações: Nome, Telefone, Salário e Regime Semanal.
O Regime Semanal consiste em armazenar quantas horas o colaborador trabalha na semana.
Somente os colaboradores dos cargos de Vendedor e Gerente podem acessar o sistema utilizando credenciais.
Além disso, todo mês é calculado um bônus sobre o salário, no entanto, esse bônus deve ser calculado conforme a taxa vigente do mês.
Para resolver esta funcionalidade crie um método calculoDeBonus(double taxa) que recebe como parâmetro a taxa a ser aplicada.
Ademais, o Estagiário não possui bonificação.
Esta atividade consiste em utilizar alguns conceitos vistos em sala, como Herança, Interface e Classe abstrata.
*/

public class Colaboradores 
{
    private String Nome;
    private String Telefone;
    private double Salario;
    private int RegimeSemanal;
    
    

    public Colaboradores(String Nome, String Telefone, double Salário, int RegimeSemanal) {
        this.Nome = Nome;
        this.Telefone = Telefone;
        this.Salário = Salário;
        this.RegimeSemanal = RegimeSemanal;
    }

    public Colaboradores()
    {
    }

    
    
    public String getNome() {
        return Nome;
    }

    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    public String getTelefone() {
        return Telefone;
    }

    public void setTelefone(String Telefone) {
        this.Telefone = Telefone;
    }

    public int getSalario() {
        return Salario;
    }

    public void setSalario(int Salário) {
        this.Salario = Salario;
    }

    public int getRegimeSemanal() {
        return RegimeSemanal;
    }

    public void setRegimeSemanal(int RegimeSemanal) {
        this.RegimeSemanal = RegimeSemanal;
    }
    
}
