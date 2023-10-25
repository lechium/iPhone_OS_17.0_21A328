//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventListViewController : UITableViewController
{
    NSArray *_visibleEvents;	// 8 = 0x8
    NSArray *_allEvents;	// 16 = 0x10
    NSArray *_buttonsInHeader;	// 24 = 0x18
    NSArray *_buttonsInHeaderSelected;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002e49d9
@property(retain, nonatomic) NSArray *buttonsInHeaderSelected; // @synthesize buttonsInHeaderSelected=_buttonsInHeaderSelected;
@property(retain, nonatomic) NSArray *buttonsInHeader; // @synthesize buttonsInHeader=_buttonsInHeader;
@property(retain, nonatomic) NSArray *allEvents; // @synthesize allEvents=_allEvents;
@property(retain, nonatomic) NSArray *visibleEvents; // @synthesize visibleEvents=_visibleEvents;
- (id)_imageFromPageContext:(id)arg1;	// IMP=0x00000000002e4830
- (void)_buttonClicked:(id)arg1;	// IMP=0x00000000002e44b4
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000002e3c40
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e3c32
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e3b47
- (id)_formatKeyAndValue:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000002e39bb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e35b8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002e359b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002e3590
- (void)finishValidation;	// IMP=0x00000000002e2cb4
- (void)toggleValidationMode;	// IMP=0x00000000002e2b4d
- (void)viewDidLoad;	// IMP=0x00000000002e29c7
- (id)initWithEvents:(id)arg1;	// IMP=0x00000000002e2916

@end
