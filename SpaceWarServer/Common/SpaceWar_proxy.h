﻿



  
// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.

#pragma once


#include "SpaceWar_common.h"

namespace SpaceWar
{
	class Proxy : public ::Proud::IRmiProxy
	{
	public:
	virtual bool RequestGameExit ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool RequestGameExit ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool RequestServerConnect ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & id) PN_SEALED; 
	virtual bool RequestServerConnect ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & id)   PN_SEALED;  
	virtual bool RequestLobbyConnect ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool RequestLobbyConnect ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool RequestNetworkGameTeamSelect ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & name,  const bool & teamRed) PN_SEALED; 
	virtual bool RequestNetworkGameTeamSelect ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & name,  const bool & teamRed)   PN_SEALED;  
	virtual bool RequestNetworkGameReady ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & name,  const bool & ready) PN_SEALED; 
	virtual bool RequestNetworkGameReady ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & name,  const bool & ready)   PN_SEALED;  
	virtual bool RequestNetworkChangeMap ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & mapName) PN_SEALED; 
	virtual bool RequestNetworkChangeMap ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & mapName)   PN_SEALED;  
	virtual bool RequestNetworkPlayerCount ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & playerCount) PN_SEALED; 
	virtual bool RequestNetworkPlayerCount ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & playerCount)   PN_SEALED;  
	virtual bool RequestNetworkGameModeChange ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & gameMode,  const bool & teamMode) PN_SEALED; 
	virtual bool RequestNetworkGameModeChange ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & gameMode,  const bool & teamMode)   PN_SEALED;  
	virtual bool RequestNetworkGameStart ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool RequestNetworkGameStart ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool RequestNetworkHostOut ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID) PN_SEALED; 
	virtual bool RequestNetworkHostOut ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID)   PN_SEALED;  
	virtual bool RequestGameSceneJoin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const Proud::Vector3 & pos,  const int & hostID,  const string & name) PN_SEALED; 
	virtual bool RequestGameSceneJoin ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const Proud::Vector3 & pos,  const int & hostID,  const string & name)   PN_SEALED;  
	virtual bool NotifyNetworkUserSetup ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & userHostID,  const string & userName,  const bool & ready,  const bool & teamRed) PN_SEALED; 
	virtual bool NotifyNetworkUserSetup ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & userHostID,  const string & userName,  const bool & ready,  const bool & teamRed)   PN_SEALED;  
	virtual bool NotifyNetworkGameTeamChange ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & userHostID,  const bool & teamRed) PN_SEALED; 
	virtual bool NotifyNetworkGameTeamChange ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & userHostID,  const bool & teamRed)   PN_SEALED;  
	virtual bool NotifyNetworkConnectUser ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & userHostID,  const string & userName) PN_SEALED; 
	virtual bool NotifyNetworkConnectUser ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & userHostID,  const string & userName)   PN_SEALED;  
	virtual bool NotifyNetworkReady ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const string & userName,  const bool & ready) PN_SEALED; 
	virtual bool NotifyNetworkReady ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const string & userName,  const bool & ready)   PN_SEALED;  
	virtual bool NotifyNetworkGameModeChange ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & gameMode,  const bool & teamMode) PN_SEALED; 
	virtual bool NotifyNetworkGameModeChange ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & gameMode,  const bool & teamMode)   PN_SEALED;  
	virtual bool NotifyNetworkGamePlayerCountChange ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & playerCount) PN_SEALED; 
	virtual bool NotifyNetworkGamePlayerCountChange ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & playerCount)   PN_SEALED;  
	virtual bool NotifyNetworkGameChangeMap ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & map) PN_SEALED; 
	virtual bool NotifyNetworkGameChangeMap ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & map)   PN_SEALED;  
	virtual bool NotifyNetworkGameStart ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool NotifyNetworkGameStart ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool NotifyNetworkGameStartFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool NotifyNetworkGameStartFailed ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool NotifyNetworkGameHostOut ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool NotifyNetworkGameHostOut ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool RequestClientJoin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const string & name,  const float & x,  const float & y,  const float & z) PN_SEALED; 
	virtual bool RequestClientJoin ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const string & name,  const float & x,  const float & y,  const float & z)   PN_SEALED;  
	virtual bool RequestWorldCreateItem ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const int & itemCID,  const int & itemID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot) PN_SEALED; 
	virtual bool RequestWorldCreateItem ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const int & itemCID,  const int & itemID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot)   PN_SEALED;  
	virtual bool RequestPlayerDamage ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & targetHostID,  const string & name,  const string & weaponName,  const float & damage,  const Proud::Vector3 & dir) PN_SEALED; 
	virtual bool RequestPlayerDamage ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & targetHostID,  const string & name,  const string & weaponName,  const float & damage,  const Proud::Vector3 & dir)   PN_SEALED;  
	virtual bool RequestPlayerUseOxy ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & name,  const float & useOxy) PN_SEALED; 
	virtual bool RequestPlayerUseOxy ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & name,  const float & useOxy)   PN_SEALED;  
	virtual bool RequestUseOxyCharger ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & oxyChargerIndex,  const float & userOxy) PN_SEALED; 
	virtual bool RequestUseOxyCharger ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & oxyChargerIndex,  const float & userOxy)   PN_SEALED;  
	virtual bool RequestUseItemBox ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & itemBoxIndex) PN_SEALED; 
	virtual bool RequestUseItemBox ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & itemBoxIndex)   PN_SEALED;  
	virtual bool RequestShelterStartSetup ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & shelterID) PN_SEALED; 
	virtual bool RequestShelterStartSetup ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & shelterID)   PN_SEALED;  
	virtual bool RequestShelterDoorControl ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & shelterID,  const bool & doorState) PN_SEALED; 
	virtual bool RequestShelterDoorControl ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & shelterID,  const bool & doorState)   PN_SEALED;  
	virtual bool RequestShelterEnter ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & shelterID,  const bool & enter) PN_SEALED; 
	virtual bool RequestShelterEnter ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & shelterID,  const bool & enter)   PN_SEALED;  
	virtual bool RequestItemDelete ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & itemID) PN_SEALED; 
	virtual bool RequestItemDelete ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & itemID)   PN_SEALED;  
	virtual bool NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const bool & host) PN_SEALED; 
	virtual bool NotifyLoginSuccess ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const bool & host)   PN_SEALED;  
	virtual bool NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & reason) PN_SEALED; 
	virtual bool NotifyLoginFailed ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & reason)   PN_SEALED;  
	virtual bool NotifyOtherClientJoin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const string & name,  const float & x,  const float & y,  const float & z) PN_SEALED; 
	virtual bool NotifyOtherClientJoin ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const string & name,  const float & x,  const float & y,  const float & z)   PN_SEALED;  
	virtual bool NotifyPlayerLost ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID) PN_SEALED; 
	virtual bool NotifyPlayerLost ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID)   PN_SEALED;  
	virtual bool NotifyPlayerMove ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const string & name,  const float & curX,  const float & curY,  const float & curZ,  const float & velocityX,  const float & velocityY,  const float & velocityZ,  const float & crx,  const float & cry,  const float & crz,  const float & rx,  const float & ry,  const float & rz) PN_SEALED; 
	virtual bool NotifyPlayerMove ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const string & name,  const float & curX,  const float & curY,  const float & curZ,  const float & velocityX,  const float & velocityY,  const float & velocityZ,  const float & crx,  const float & cry,  const float & crz,  const float & rx,  const float & ry,  const float & rz)   PN_SEALED;  
	virtual bool NotifyDeleteItem ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & itemID) PN_SEALED; 
	virtual bool NotifyDeleteItem ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & itemID)   PN_SEALED;  
	virtual bool NotifyCreateItem ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const int & itemCID,  const int & itemID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot) PN_SEALED; 
	virtual bool NotifyCreateItem ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const int & itemCID,  const int & itemID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot)   PN_SEALED;  
	virtual bool NotifyStartOxyChargerState ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & oxyChargerID,  const float & oxy) PN_SEALED; 
	virtual bool NotifyStartOxyChargerState ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & oxyChargerID,  const float & oxy)   PN_SEALED;  
	virtual bool NotifyStartItemBoxState ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & itemBoxID,  const bool & openState) PN_SEALED; 
	virtual bool NotifyStartItemBoxState ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & itemBoxID,  const bool & openState)   PN_SEALED;  
	virtual bool NotifyPlayerEquipItem ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const int & itemCID,  const int & itemID) PN_SEALED; 
	virtual bool NotifyPlayerEquipItem ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const int & itemCID,  const int & itemID)   PN_SEALED;  
	virtual bool NotifyPlayerUnEquipItem ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const int & itemCID,  const int & itemID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot) PN_SEALED; 
	virtual bool NotifyPlayerUnEquipItem ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const int & itemCID,  const int & itemID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot)   PN_SEALED;  
	virtual bool NotifyPlayerBulletCreate ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & bulletType,  const string & bulletID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot) PN_SEALED; 
	virtual bool NotifyPlayerBulletCreate ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & bulletType,  const string & bulletID,  const Proud::Vector3 & pos,  const Proud::Vector3 & rot)   PN_SEALED;  
	virtual bool NotifyPlayerBulletMove ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & bulletID,  const Proud::Vector3 & pos,  const Proud::Vector3 & velocity,  const Proud::Vector3 & rot) PN_SEALED; 
	virtual bool NotifyPlayerBulletMove ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & bulletID,  const Proud::Vector3 & pos,  const Proud::Vector3 & velocity,  const Proud::Vector3 & rot)   PN_SEALED;  
	virtual bool NotifyPlayerBulletDelete ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & bulletID) PN_SEALED; 
	virtual bool NotifyPlayerBulletDelete ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & bulletID)   PN_SEALED;  
	virtual bool NotifyPlayerAnimation ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & hostID,  const string & name,  const string & animationName,  const int & aniValue) PN_SEALED; 
	virtual bool NotifyPlayerAnimation ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & hostID,  const string & name,  const string & animationName,  const int & aniValue)   PN_SEALED;  
	virtual bool NotifyPlayerChangeHP ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & name,  const float & hp,  const float & prevhp,  const float & maxhp,  const Proud::Vector3 & dir) PN_SEALED; 
	virtual bool NotifyPlayerChangeHP ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & name,  const float & hp,  const float & prevhp,  const float & maxhp,  const Proud::Vector3 & dir)   PN_SEALED;  
	virtual bool NotifyPlayerChangeOxygen ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & name,  const float & oxygen,  const float & prevoxy,  const float & maxoxy) PN_SEALED; 
	virtual bool NotifyPlayerChangeOxygen ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & name,  const float & oxygen,  const float & prevoxy,  const float & maxoxy)   PN_SEALED;  
	virtual bool NotifyUseOxyCharger ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & oxyChargerIndex,  const float & userOxy) PN_SEALED; 
	virtual bool NotifyUseOxyCharger ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & oxyChargerIndex,  const float & userOxy)   PN_SEALED;  
	virtual bool NotifyUseItemBox ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & itemBoxIndex,  const int & itemID) PN_SEALED; 
	virtual bool NotifyUseItemBox ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & itemBoxIndex,  const int & itemID)   PN_SEALED;  
	virtual bool NotifyShelterInfo ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const int & shelterID,  const bool & doorState,  const bool & lightState) PN_SEALED; 
	virtual bool NotifyShelterInfo ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const int & shelterID,  const bool & doorState,  const bool & lightState)   PN_SEALED;  
	virtual bool NotifyMeteorCreateTime ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & time) PN_SEALED; 
	virtual bool NotifyMeteorCreateTime ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & time)   PN_SEALED;  
	virtual bool NotifyMeteorCreate ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const float & anglex,  const float & anglez) PN_SEALED; 
	virtual bool NotifyMeteorCreate ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const float & anglex,  const float & anglez)   PN_SEALED;  
	virtual bool NotifySpaceShipEngineCharge ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & spaceShipID,  const float & fuel) PN_SEALED; 
	virtual bool NotifySpaceShipEngineCharge ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & spaceShipID,  const float & fuel)   PN_SEALED;  
	virtual bool NotifyGrenadeCreate ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & networkID,  const Proud::Vector3 & pos) PN_SEALED; 
	virtual bool NotifyGrenadeCreate ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & networkID,  const Proud::Vector3 & pos)   PN_SEALED;  
	virtual bool NotifyGrenadeMove ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & networkID,  const Proud::Vector3 & pos,  const Proud::Vector3 & velocity,  const Proud::Vector3 & rot) PN_SEALED; 
	virtual bool NotifyGrenadeMove ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & networkID,  const Proud::Vector3 & pos,  const Proud::Vector3 & velocity,  const Proud::Vector3 & rot)   PN_SEALED;  
	virtual bool NotifyGrenadeBoom ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & sendHostID,  const string & networkID,  const bool & isStone) PN_SEALED; 
	virtual bool NotifyGrenadeBoom ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & sendHostID,  const string & networkID,  const bool & isStone)   PN_SEALED;  
	virtual bool NotifyGrenadeRemove ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & networkID) PN_SEALED; 
	virtual bool NotifyGrenadeRemove ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & networkID)   PN_SEALED;  
	virtual bool RequestHpUpdate ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const float & hp) PN_SEALED; 
	virtual bool RequestHpUpdate ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const float & hp)   PN_SEALED;  
	virtual bool RequestSpaceShip ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & winPlayerID) PN_SEALED; 
	virtual bool RequestSpaceShip ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & winPlayerID)   PN_SEALED;  
	virtual bool RequestGameEnd ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool RequestGameEnd ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool NotifyKillInfo ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & targetName,  const bool & kill,  const int & totalKill,  const int & totalAssist) PN_SEALED; 
	virtual bool NotifyKillInfo ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & targetName,  const bool & kill,  const int & totalKill,  const int & totalAssist)   PN_SEALED;  
	virtual bool NotifyGameResultInfoMe ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & gameMode,  const int & winState,  const int & playTime,  const int & kills,  const int & assists,  const int & death,  const int & getMoney) PN_SEALED; 
	virtual bool NotifyGameResultInfoMe ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & gameMode,  const int & winState,  const int & playTime,  const int & kills,  const int & assists,  const int & death,  const int & getMoney)   PN_SEALED;  
	virtual bool NotifyGameResultInfoOther ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const string & name,  const int & state) PN_SEALED; 
	virtual bool NotifyGameResultInfoOther ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const string & name,  const int & state)   PN_SEALED;  
	virtual bool NotifyGameResultShow ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool NotifyGameResultShow ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool RequestSpaceShipSetup ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & spaceShipCount) PN_SEALED; 
	virtual bool RequestSpaceShipSetup ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & spaceShipCount)   PN_SEALED;  
	virtual bool NotifyDeathZoneCreate ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & spaceShipIndex) PN_SEALED; 
	virtual bool NotifyDeathZoneCreate ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & spaceShipIndex)   PN_SEALED;  
	virtual bool RequestDeathZoneMoveIndex ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & moveIndex) PN_SEALED; 
	virtual bool RequestDeathZoneMoveIndex ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & moveIndex)   PN_SEALED;  
	virtual bool NotifyDeathZoneMoveHostAndIndexSetup ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & moveHostID,  const int & currentIndex) PN_SEALED; 
	virtual bool NotifyDeathZoneMoveHostAndIndexSetup ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & moveHostID,  const int & currentIndex)   PN_SEALED;  
	virtual bool NotifyDeathZoneMove ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const Proud::Vector3 & pos,  const Proud::Vector3 & velocity) PN_SEALED; 
	virtual bool NotifyDeathZoneMove ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const Proud::Vector3 & pos,  const Proud::Vector3 & velocity)   PN_SEALED;  
static const PNTCHAR* RmiName_RequestGameExit;
static const PNTCHAR* RmiName_RequestServerConnect;
static const PNTCHAR* RmiName_RequestLobbyConnect;
static const PNTCHAR* RmiName_RequestNetworkGameTeamSelect;
static const PNTCHAR* RmiName_RequestNetworkGameReady;
static const PNTCHAR* RmiName_RequestNetworkChangeMap;
static const PNTCHAR* RmiName_RequestNetworkPlayerCount;
static const PNTCHAR* RmiName_RequestNetworkGameModeChange;
static const PNTCHAR* RmiName_RequestNetworkGameStart;
static const PNTCHAR* RmiName_RequestNetworkHostOut;
static const PNTCHAR* RmiName_RequestGameSceneJoin;
static const PNTCHAR* RmiName_NotifyNetworkUserSetup;
static const PNTCHAR* RmiName_NotifyNetworkGameTeamChange;
static const PNTCHAR* RmiName_NotifyNetworkConnectUser;
static const PNTCHAR* RmiName_NotifyNetworkReady;
static const PNTCHAR* RmiName_NotifyNetworkGameModeChange;
static const PNTCHAR* RmiName_NotifyNetworkGamePlayerCountChange;
static const PNTCHAR* RmiName_NotifyNetworkGameChangeMap;
static const PNTCHAR* RmiName_NotifyNetworkGameStart;
static const PNTCHAR* RmiName_NotifyNetworkGameStartFailed;
static const PNTCHAR* RmiName_NotifyNetworkGameHostOut;
static const PNTCHAR* RmiName_RequestClientJoin;
static const PNTCHAR* RmiName_RequestWorldCreateItem;
static const PNTCHAR* RmiName_RequestPlayerDamage;
static const PNTCHAR* RmiName_RequestPlayerUseOxy;
static const PNTCHAR* RmiName_RequestUseOxyCharger;
static const PNTCHAR* RmiName_RequestUseItemBox;
static const PNTCHAR* RmiName_RequestShelterStartSetup;
static const PNTCHAR* RmiName_RequestShelterDoorControl;
static const PNTCHAR* RmiName_RequestShelterEnter;
static const PNTCHAR* RmiName_RequestItemDelete;
static const PNTCHAR* RmiName_NotifyLoginSuccess;
static const PNTCHAR* RmiName_NotifyLoginFailed;
static const PNTCHAR* RmiName_NotifyOtherClientJoin;
static const PNTCHAR* RmiName_NotifyPlayerLost;
static const PNTCHAR* RmiName_NotifyPlayerMove;
static const PNTCHAR* RmiName_NotifyDeleteItem;
static const PNTCHAR* RmiName_NotifyCreateItem;
static const PNTCHAR* RmiName_NotifyStartOxyChargerState;
static const PNTCHAR* RmiName_NotifyStartItemBoxState;
static const PNTCHAR* RmiName_NotifyPlayerEquipItem;
static const PNTCHAR* RmiName_NotifyPlayerUnEquipItem;
static const PNTCHAR* RmiName_NotifyPlayerBulletCreate;
static const PNTCHAR* RmiName_NotifyPlayerBulletMove;
static const PNTCHAR* RmiName_NotifyPlayerBulletDelete;
static const PNTCHAR* RmiName_NotifyPlayerAnimation;
static const PNTCHAR* RmiName_NotifyPlayerChangeHP;
static const PNTCHAR* RmiName_NotifyPlayerChangeOxygen;
static const PNTCHAR* RmiName_NotifyUseOxyCharger;
static const PNTCHAR* RmiName_NotifyUseItemBox;
static const PNTCHAR* RmiName_NotifyShelterInfo;
static const PNTCHAR* RmiName_NotifyMeteorCreateTime;
static const PNTCHAR* RmiName_NotifyMeteorCreate;
static const PNTCHAR* RmiName_NotifySpaceShipEngineCharge;
static const PNTCHAR* RmiName_NotifyGrenadeCreate;
static const PNTCHAR* RmiName_NotifyGrenadeMove;
static const PNTCHAR* RmiName_NotifyGrenadeBoom;
static const PNTCHAR* RmiName_NotifyGrenadeRemove;
static const PNTCHAR* RmiName_RequestHpUpdate;
static const PNTCHAR* RmiName_RequestSpaceShip;
static const PNTCHAR* RmiName_RequestGameEnd;
static const PNTCHAR* RmiName_NotifyKillInfo;
static const PNTCHAR* RmiName_NotifyGameResultInfoMe;
static const PNTCHAR* RmiName_NotifyGameResultInfoOther;
static const PNTCHAR* RmiName_NotifyGameResultShow;
static const PNTCHAR* RmiName_RequestSpaceShipSetup;
static const PNTCHAR* RmiName_NotifyDeathZoneCreate;
static const PNTCHAR* RmiName_RequestDeathZoneMoveIndex;
static const PNTCHAR* RmiName_NotifyDeathZoneMoveHostAndIndexSetup;
static const PNTCHAR* RmiName_NotifyDeathZoneMove;
static const PNTCHAR* RmiName_First;
		Proxy()
		{
			if(m_signature != 1)
				::Proud::ShowUserMisuseError(::Proud::ProxyBadSignatureErrorText);
		}

		virtual ::Proud::RmiID* GetRmiIDList() PN_OVERRIDE { return g_RmiIDList; } 
		virtual int GetRmiIDListCount() PN_OVERRIDE { return g_RmiIDListCount; }
	};
}

