//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class MISSING_TYPE;

@interface SVSAnnounceNotificationsIntroViewController : PRXCardContentViewController
{
    MISSING_TYPE *notificationSources;	// 8 = 0x8
    MISSING_TYPE *loadingQueue;	// 16 = 0x10
    MISSING_TYPE *mainController;	// 24 = 0x18
}

+ (void)optIntoAnnounceNotifications;	// IMP=0x0020000000111520
- (void).cxx_destruct;	// IMP=0x0040000000112f10
- (id)initWithContentView:(id)arg1;	// IMP=0x0010000000112ee0
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000112730
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001126f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000112590
- (void)viewDidLoad;	// IMP=0x0010000000112440
- (id)initWithMainController:(id)arg1;	// IMP=0x00100000001114f0

@end

