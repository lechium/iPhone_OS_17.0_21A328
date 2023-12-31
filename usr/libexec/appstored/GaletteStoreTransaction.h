//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface GaletteStoreTransaction
{
}

- (_Bool)_removeBundleIDFromPendingConfirmation:(id)arg1 outError:(id *)arg2;	// IMP=0x00200000002408d6
- (_Bool)setNeedsThirdPartyPurchasesConfirmationForBundleID:(id)arg1;	// IMP=0x0010000000240741
- (_Bool)removeAppForBundleID:(id)arg1;	// IMP=0x0010000000240690
- (void)insertApp:(id)arg1;	// IMP=0x00100000002405a3
- (_Bool)handleAppUninstalled:(id)arg1;	// IMP=0x001000000024049d
- (_Bool)confirmThirdPartyPurchasesForBundleID:(id)arg1;	// IMP=0x0010000000240397

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

