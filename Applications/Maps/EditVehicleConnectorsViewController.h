//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, NSString, UILabel, UITableView, UIView, VGVehicle;

@interface EditVehicleConnectorsViewController : UIViewController
{
    VGVehicle *_vehicle;	// 8 = 0x8
    NSArray *_startingConnectorTypes;	// 16 = 0x10
    NSMutableArray *_currentConnectorTypes;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    UIView *_tableFooterView;	// 40 = 0x28
    UILabel *_tableFooterLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000008e8a54
@property(retain, nonatomic) UILabel *tableFooterLabel; // @synthesize tableFooterLabel=_tableFooterLabel;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000008e88fe
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008e88f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008e87a5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000008e876a
- (void)pressedDone;	// IMP=0x00100000008e866d
- (void)pressedCancel;	// IMP=0x00100000008e85d3
- (void)viewDidLayoutSubviews;	// IMP=0x00100000008e8412
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000008e8368
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000008e827a
- (void)viewDidLoad;	// IMP=0x00100000008e7e25
- (id)initWithVehicle:(id)arg1;	// IMP=0x00100000008e78e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
