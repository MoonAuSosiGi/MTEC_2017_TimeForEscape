﻿ 





// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.

using System;
            
using Nettention.Proud; 
namespace SpaceWar
{
	internal class Common
	{
		// Message ID that replies to each RMI method. 
			public const Nettention.Proud.RmiID RequestServerConnect = (Nettention.Proud.RmiID)3141+1;
			public const Nettention.Proud.RmiID RequestClientJoin = (Nettention.Proud.RmiID)3141+2;
			public const Nettention.Proud.RmiID RequestWorldCreateItem = (Nettention.Proud.RmiID)3141+3;
			public const Nettention.Proud.RmiID RequestPlayerDamage = (Nettention.Proud.RmiID)3141+4;
			public const Nettention.Proud.RmiID RequestPlayerUseOxy = (Nettention.Proud.RmiID)3141+5;
			public const Nettention.Proud.RmiID NotifyLoginSuccess = (Nettention.Proud.RmiID)3141+6;
			public const Nettention.Proud.RmiID NotifyLoginFailed = (Nettention.Proud.RmiID)3141+7;
			public const Nettention.Proud.RmiID NotifyOtherClientJoin = (Nettention.Proud.RmiID)3141+8;
			public const Nettention.Proud.RmiID NotifyPlayerLost = (Nettention.Proud.RmiID)3141+9;
			public const Nettention.Proud.RmiID NotifyPlayerMove = (Nettention.Proud.RmiID)3141+10;
			public const Nettention.Proud.RmiID NotifyDeleteItem = (Nettention.Proud.RmiID)3141+11;
			public const Nettention.Proud.RmiID NotifyCreateItem = (Nettention.Proud.RmiID)3141+12;
			public const Nettention.Proud.RmiID NotifyPlayerEquipItem = (Nettention.Proud.RmiID)3141+13;
			public const Nettention.Proud.RmiID NotifyPlayerUnEquipItem = (Nettention.Proud.RmiID)3141+14;
			public const Nettention.Proud.RmiID NotifyPlayerBulletCreate = (Nettention.Proud.RmiID)3141+15;
			public const Nettention.Proud.RmiID NotifyPlayerBulletMove = (Nettention.Proud.RmiID)3141+16;
			public const Nettention.Proud.RmiID NotifyPlayerBulletDelete = (Nettention.Proud.RmiID)3141+17;
			public const Nettention.Proud.RmiID NotifyPlayerAnimation = (Nettention.Proud.RmiID)3141+18;
			public const Nettention.Proud.RmiID NotifyPlayerChangeHP = (Nettention.Proud.RmiID)3141+19;
			public const Nettention.Proud.RmiID NotifyPlayerChangeOxygen = (Nettention.Proud.RmiID)3141+20;
		// List that has RMI ID.
		public static Nettention.Proud.RmiID[] RmiIDList = new Nettention.Proud.RmiID[] {
			RequestServerConnect,
			RequestClientJoin,
			RequestWorldCreateItem,
			RequestPlayerDamage,
			RequestPlayerUseOxy,
			NotifyLoginSuccess,
			NotifyLoginFailed,
			NotifyOtherClientJoin,
			NotifyPlayerLost,
			NotifyPlayerMove,
			NotifyDeleteItem,
			NotifyCreateItem,
			NotifyPlayerEquipItem,
			NotifyPlayerUnEquipItem,
			NotifyPlayerBulletCreate,
			NotifyPlayerBulletMove,
			NotifyPlayerBulletDelete,
			NotifyPlayerAnimation,
			NotifyPlayerChangeHP,
			NotifyPlayerChangeOxygen,
		};
	}
}

				 
