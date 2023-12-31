//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameSessionService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000005d8b2
+ (Class)interfaceClass;	// IMP=0x001000000005d8a1
- (id)actualIdentifiersForObsfucatedPlayerIDs:(id)arg1 inSession:(id)arg2;	// IMP=0x00200000000623f3
- (oneway void)sendMessageForSessionWithID:(id)arg1 withLocalizedFormatKey:(id)arg2 arguments:(id)arg3 userMessage:(id)arg4 data:(id)arg5 recipientIDs:(id)arg6 badgePlayers:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000618e1
- (oneway void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060f70
- (oneway void)fetchShareURLForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060d29
- (oneway void)sendData:(id)arg1 reliably:(_Bool)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060c8a
- (void)didSaveConnectionState:(long long)arg1 forGameSession:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000603e1
- (void)_setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f6c5
- (oneway void)setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f6a4
- (oneway void)saveData:(id)arg1 forSessionWithIdentifier:(id)arg2 changeTag:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f011
- (oneway void)loadDataForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ee87
- (oneway void)removePlayers:(id)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ebd2
- (oneway void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e82f
- (oneway void)loadSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e6cb
- (oneway void)loadSessionsInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e139
- (oneway void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005dc05
- (oneway void)primaryPlayerInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005d9ae
- (id)validateContainer:(id)arg1;	// IMP=0x001000000005d8c5
- (_Bool)requiresAuthentication;	// IMP=0x001000000005d8bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

