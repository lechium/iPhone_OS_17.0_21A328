//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RelatedSearchSuggestion, UICollectionViewCellRegistration;
@protocol RelatedSearchSuggestionOutlineCellDelegate;

@interface RelatedSearchSuggestionOutlineCellModel : NSObject
{
    RelatedSearchSuggestion *_suggestion;	// 8 = 0x8
    id <RelatedSearchSuggestionOutlineCellDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000cba67c
@property(readonly, nonatomic) __weak id <RelatedSearchSuggestionOutlineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RelatedSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (_Bool)needsReloadFromPreviousViewModel:(id)arg1;	// IMP=0x0010000000cba647
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000cba511
@property(readonly) unsigned long long hash;
- (id)initWithRelatedSuggestion:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000cba461

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

