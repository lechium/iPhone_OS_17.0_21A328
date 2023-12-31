//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTableViewCell.h>

@class CollectionView, NSString;
@protocol CollectionHandlerInfo;

@interface CollectionTableViewCell : MKTableViewCell
{
    CollectionView *_collectionView;	// 8 = 0x8
    _Bool _disabled;	// 16 = 0x10
    _Bool _showCheckmark;	// 17 = 0x11
    id <CollectionHandlerInfo> _collectionInfo;	// 24 = 0x18
    unsigned long long _collectionViewSize;	// 32 = 0x20
}

+ (double)estimatedCellHeight;	// IMP=0x00200000007b9c60
+ (double)cellHeight;	// IMP=0x00100000007b9c4f
+ (id)identifier;	// IMP=0x00100000007b9c42
- (void).cxx_destruct;	// IMP=0x00200000007ba3ad
@property(nonatomic, getter=showsCheckmark) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(retain, nonatomic) id <CollectionHandlerInfo> collectionInfo; // @synthesize collectionInfo=_collectionInfo;
- (void)createContent;	// IMP=0x00100000007b9e25
- (id)_cellBackgroundColor;	// IMP=0x00100000007b9ccb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000007b9c6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

