//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, ShortcutsRowCellProvider, SuggestionsDataProvider, UICollectionView;
@protocol ShortcutsRowTableViewCellDelegate;

@interface ShortcutsRowCollectionViewListCell : UICollectionViewCell
{
    ShortcutsRowCellProvider *_cellProvider;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    id <ShortcutsRowTableViewCellDelegate> _delegate;	// 24 = 0x18
}

+ (double)estimatedCellHeight;	// IMP=0x00200000001d0e7f
- (void).cxx_destruct;	// IMP=0x00200000001d1581
@property(nonatomic) __weak id <ShortcutsRowTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shortcutsRowCellProvider:(id)arg1 openShortcut:(id)arg2;	// IMP=0x00100000001d14e9
- (void)shortcutsRowCellProviderAddNewShortcut:(id)arg1;	// IMP=0x00100000001d149d
- (void);	// IMP=0x00100000001d1424
- (void)fetchMissingImages;	// IMP=0x00100000001d1407
- (void)resetScrollOffset;	// IMP=0x00100000001d13da
@property(retain, nonatomic) SuggestionsDataProvider *suggestionsDataProvider;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001d0e8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

