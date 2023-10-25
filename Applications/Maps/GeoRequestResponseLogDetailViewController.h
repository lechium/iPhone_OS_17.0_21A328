//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class GEORequestResponsePersistedEvent, NSArray, NSMutableAttributedString, NSString, UISearchController, UITextView;

@interface GeoRequestResponseLogDetailViewController : UIViewController
{
    GEORequestResponsePersistedEvent *_event;	// 8 = 0x8
    NSArray *_mapItems;	// 16 = 0x10
    UISearchController *_searchController;	// 24 = 0x18
    UITextView *_textView;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    NSMutableAttributedString *_attributedText;	// 48 = 0x30
    struct _NSRange _lastHighlightedRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001e164c
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00100000001e153d
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00100000001e1528
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00100000001e14b7
- (void)searchFor:(id)arg1;	// IMP=0x00100000001e1379
- (void)_showPlaceCardAt:(unsigned long long)arg1;	// IMP=0x00100000001e1292
- (void)_showPlaceCard;	// IMP=0x00100000001e1014
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001e0e2f
- (void)viewDidLoad;	// IMP=0x00100000001e092d
- (id)initWithEvent:(id)arg1;	// IMP=0x00100000001e0543

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
