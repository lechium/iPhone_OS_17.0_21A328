//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class COSInternalPairingDashboardHeader, COSInternalPairingDashboardModel, NRDevice, NSObject, NSString, UITableView;
@protocol OS_dispatch_queue;

@interface COSInternalPairingDashboardViewController : UITableViewController
{
    COSInternalPairingDashboardModel *_dashboardData;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    UITableView *_dashboard;	// 24 = 0x18
    COSInternalPairingDashboardHeader *_watchHeader;	// 32 = 0x20
    NRDevice *_pairingDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000362e4
@property(retain, nonatomic) NRDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(retain, nonatomic) COSInternalPairingDashboardHeader *watchHeader; // @synthesize watchHeader=_watchHeader;
@property(retain, nonatomic) UITableView *dashboard; // @synthesize dashboard=_dashboard;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) COSInternalPairingDashboardModel *dashboardData; // @synthesize dashboardData=_dashboardData;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0010000000036223
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000036215
- (void)decorateCell:(id)arg1 basedOnEvent:(id)arg2;	// IMP=0x0010000000035e93
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000035c03
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000035b95
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000035b8a
- (double);	// IMP=0x0010000000035b32
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000035b1d
- (void)addPairingDevice:(id)arg1;	// IMP=0x0010000000035a80
- (void)_updateDashBoardRows:(id)arg1;	// IMP=0x00100000000359da
- (void)_updatePairingEventsWithEvent:(id)arg1;	// IMP=0x001000000003585a
- (void)_updatePairingEvents:(id)arg1;	// IMP=0x00100000000357b3
- (void)dealloc;	// IMP=0x0010000000035731
- (void)viewDidLoad;	// IMP=0x00100000000355f2
- (id)init;	// IMP=0x001000000003546a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
