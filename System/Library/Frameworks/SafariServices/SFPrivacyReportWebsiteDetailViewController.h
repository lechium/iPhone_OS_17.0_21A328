//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, WBSTrackedFirstParty;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController
{
    WBSTrackedFirstParty *_website;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    _Bool _separatesBlockedTrackers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000adfb1
@property(nonatomic) _Bool separatesBlockedTrackers; // @synthesize separatesBlockedTrackers=_separatesBlockedTrackers;
- (void)_loadSections;	// IMP=0x00000000000add81
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000add79
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000add1b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000adb15
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000ada99
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000ada7c
- (void)viewDidLoad;	// IMP=0x00000000000ad9a1
- (id)initWithWebsite:(id)arg1;	// IMP=0x00000000000ad91b

@end

