//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSArray, NSMapTable, NSMutableArray;
@protocol WFImageContentItemCellDelegate;

__attribute__((visibility("hidden")))
@interface WFImageContentItemCell : UITableViewCell
{
    NSMapTable *_activityIndicators;	// 8 = 0x8
    NSMutableArray *_imageViews;	// 16 = 0x10
    NSMutableArray *_selectedImageViews;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    id <WFImageContentItemCellDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004f083
@property(nonatomic) __weak id <WFImageContentItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000004efbc
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000004ef7a
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000004ef72
- (void)imageViewTapped:(id)arg1;	// IMP=0x000000000004ee7f
- (void)setSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004ed43
- (void)layoutSubviews;	// IMP=0x000000000004e5a9
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000004e431

@end

