//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactSuggestionViewController;

__attribute__((visibility("hidden")))
@interface CNPropertySuggestionAction
{
    long long _selectedChoice;	// 8 = 0x8
    CNContactSuggestionViewController *_suggestionViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001fcfa2
@property(retain, nonatomic) CNContactSuggestionViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(nonatomic) long long selectedChoice; // @synthesize selectedChoice=_selectedChoice;
- (void)reject;	// IMP=0x00000000001fcf1d
- (void)confirm;	// IMP=0x00000000001fcecb
- (_Bool)_confirmOrRejectDonation:(_Bool)arg1;	// IMP=0x00000000001fcd3f
- (_Bool)_confirmOrRejectSuggestion:(_Bool)arg1;	// IMP=0x00000000001fcbe4
- (_Bool)_confirmOrReject:(_Bool)arg1;	// IMP=0x00000000001fcb2e
- (id)dataSourceWithPropertyItem:(id)arg1;	// IMP=0x00000000001fc8a9
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x00000000001fc6c4

@end

