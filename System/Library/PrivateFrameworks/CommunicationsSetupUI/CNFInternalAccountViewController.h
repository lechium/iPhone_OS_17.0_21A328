//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class FTRegConnectionHandler, IMAccount;

__attribute__((visibility("hidden")))
@interface CNFInternalAccountViewController : PSListController
{
    IMAccount *_account;	// 192 = 0xc0
    FTRegConnectionHandler *_connectionHandler;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000503cd
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
- (void)_handleAccountNotification:(id)arg1;	// IMP=0x0000000000050371
- (void)_handleDaemonConnected:(id)arg1;	// IMP=0x000000000005035f
- (void)_handleDaemonDisconnected:(id)arg1;	// IMP=0x000000000005034d
- (void)_stopListeningForNotifications;	// IMP=0x00000000000501bf
- (void)_startListeningForNotifications;	// IMP=0x000000000004fff2
- (id)accountIsActive:(id)arg1;	// IMP=0x000000000004ffe5
- (id)registrationFailureReason:(id)arg1;	// IMP=0x000000000004ffd8
- (id)accountDisplayName:(id)arg1;	// IMP=0x000000000004ffcb
- (id)statusForAlias:(id)arg1;	// IMP=0x000000000004ffbe
- (id)accountType:(id)arg1;	// IMP=0x000000000004ffb1
- (id)accountLogin:(id)arg1;	// IMP=0x000000000004ffa4
- (id)registrationStatus:(id)arg1;	// IMP=0x000000000004ff97
- (id)accountLoginStatus:(id)arg1;	// IMP=0x000000000004ff8a
- (_Bool)isConnectedToDaemon;	// IMP=0x000000000004ff6d
- (id)specifierForAlias:(id)arg1;	// IMP=0x000000000004fed3
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000004fe92
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000004fe51
- (id)bundle;	// IMP=0x000000000004fe38
- (id)specifiers;	// IMP=0x000000000004faf1
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000004fa11

@end

