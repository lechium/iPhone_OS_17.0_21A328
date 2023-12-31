//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PUPhotoEditBaseAdjustmentCellDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAdjustmentCell
{
    _Bool _shouldDisplayValueLabel;	// 17 = 0x11
    id <PUPhotoEditBaseAdjustmentCellDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003c1bff
@property(nonatomic) _Bool shouldDisplayValueLabel; // @synthesize shouldDisplayValueLabel=_shouldDisplayValueLabel;
@property(nonatomic) __weak id <PUPhotoEditBaseAdjustmentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleButton:(id)arg1;	// IMP=0x00000000003c1acc
@property(nonatomic) _Bool displayMappedValue;
- (void)_updateValueLabelVisibility;	// IMP=0x00000000003c19c5
- (void)setIsUserModifying:(_Bool)arg1;	// IMP=0x00000000003c1984
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000003c18b8
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000003c180d
- (void)reloadImage;	// IMP=0x00000000003c170b
- (void)setImageIsColor:(_Bool)arg1;	// IMP=0x00000000003c16e8
- (void)setImageName:(id)arg1;	// IMP=0x00000000003c1691
- (void)_setupEventHandler;	// IMP=0x00000000003c1638
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c15ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003c158f

@end

