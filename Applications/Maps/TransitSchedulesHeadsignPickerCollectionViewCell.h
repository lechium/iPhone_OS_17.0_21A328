//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UIButton;
@protocol TransitSchedulesHeadsignPickerCollectionViewCellDelegate;

@interface TransitSchedulesHeadsignPickerCollectionViewCell : UICollectionViewCell
{
    UIButton *_picker;	// 8 = 0x8
    NSArray *_departureSequences;	// 16 = 0x10
    id <TransitSchedulesHeadsignPickerCollectionViewCellDelegate> _delegate;	// 24 = 0x18
}

+ (id)cellIdentifier;	// IMP=0x0020000000984354
- (void).cxx_destruct;	// IMP=0x0020000000984827
@property(nonatomic) __weak id <TransitSchedulesHeadsignPickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateDeparturePickerWithSelectedDepartureSequence:(id)arg1;	// IMP=0x00100000009843e8
- (void)setSelectedDepartureSequence:(id)arg1;	// IMP=0x00100000009843d6
- (void)setDepartureSequences:(id)arg1 withSelectedDepartureSequence:(id)arg2;	// IMP=0x0010000000984361
- (void)configureViews;	// IMP=0x0010000000983fce
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000983f71

@end

