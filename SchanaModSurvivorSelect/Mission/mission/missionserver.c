modded class MissionServer extends MissionBase
{
	override PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx)
	{
		string characterName;
		// get login data for new character
		// note: ctx can be filled on client in StoreLoginData()
		ProcessLoginData(ctx, m_top, m_bottom, m_shoes, m_skin);

        // SchanaMod - the function we're overriding is stock except for inverting this
        //             if statement to check if the m_skin parameter has been set
		if (m_skin != -1)
		{
            characterName = GetGame().ListAvailableCharacters().Get(m_skin);
		}
		else
		{
			characterName = GetGame().CreateRandomPlayer();
		}
		
		if (CreateCharacter(identity, pos, ctx, characterName))
		{
			EquipCharacter();
		}
		
		return m_player;
	}
}