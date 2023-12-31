//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSString;
@protocol SearchMeCardLabelsOperationDelegate;

@interface SearchMeCardLabelsOperation : NSOperation
{
    NSString *_searchQuery;	// 8 = 0x8
    AutocompleteContext *_context;	// 16 = 0x10
    id <SearchMeCardLabelsOperationDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a036ca
@property(nonatomic) __weak id <SearchMeCardLabelsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_meCardLabelResultsForMeCard:(id)arg1;	// IMP=0x0010000000a03009
- (void)main;	// IMP=0x0010000000a02e1b
- (id)initWithSearchQuery:(id)arg1 context:(id)arg2;	// IMP=0x0010000000a02d79

@end

