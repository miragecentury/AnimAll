/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.nao;

public class Say
{
    public String text;

    public Say()
    {
    }

    @Override
    public boolean equals(Object obj)
    {
        if (obj == this) {
            return true;
        }
        if ((obj == null) || (obj.getClass() != this.getClass())) {
            return false;
        }
        final Say myObj = (Say)obj;
        if (!text.equals(myObj.text)) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((text == null) ? 0 : text.hashCode());
        return result;
    }
}
