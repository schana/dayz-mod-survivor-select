modded class DayZGame extends CGame
{
    protected ref array<string> m_SchanaSurvivors;

    override bool OnInitialize()
    {
        m_SchanaSurvivors = GetGame().ListAvailableCharacters();

        return super.OnInitialize();
    }

    override void Connect()
    {
        string survivor;
        if (GetCLIParam("survivor", survivor))
        {
            for (int i = 0; i < m_SchanaSurvivors.Count(); ++i)
            {
                if (m_SchanaSurvivors.Get(i).Contains(survivor))
                {
                    SetCharacterInfo(-1, -1, -1, i);
                }
            }
        }

        super.Connect();
    }
}