//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CNContact, NSArray;
@protocol SFContactAutoFillViewControllerFiller;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillViewController : UITableViewController
{
    CNContact *_contact;	// 8 = 0x8
    NSArray *_matches;	// 16 = 0x10
    NSArray *_propertyValues;	// 24 = 0x18
    id <SFContactAutoFillViewControllerFiller> _autoFiller;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000edf2d
@property(nonatomic) __weak id <SFContactAutoFillViewControllerFiller> autoFiller; // @synthesize autoFiller=_autoFiller;
- (_Bool)canDrillInCellAtIndexPath:(id)arg1;	// IMP=0x00000000000ede38
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000ede23
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000edcbb
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000edc77
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000edb1e
- (void)autoFill:(id)arg1;	// IMP=0x00000000000ed88f
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000ed887
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ed81d
- (void)_cancel:(id)arg1;	// IMP=0x00000000000ed7e9
- (void)viewDidLoad;	// IMP=0x00000000000ed5ab
- (id)valuesFromPropertyMatches:(id)arg1;	// IMP=0x00000000000ecf73
- (id)matchesForProperty:(id)arg1;	// IMP=0x00000000000ece6e
- (id)properties;	// IMP=0x00000000000eca12
- (id)_valueForProperty:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000ec0e9
- (id)initWithMatches:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000ec02a

@end
