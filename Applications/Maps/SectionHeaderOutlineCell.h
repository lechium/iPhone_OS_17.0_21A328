//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SectionHeaderOutlineCellModel;

@interface SectionHeaderOutlineCell
{
    id <SectionHeaderOutlineCellModel> _cellModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000a1f3c7
@property(retain, nonatomic) id <SectionHeaderOutlineCellModel> cellModel; // @synthesize cellModel=_cellModel;
- (void)_accessoryButtonTapped:(id)arg1;	// IMP=0x0010000000a1f330
- (void)_hoverGestureRecognizerStateDidChange:(id)arg1;	// IMP=0x0010000000a1f31e
- (void)_updateAccessoryConfigurations;	// IMP=0x0010000000a1efb6
- (void)setHovering:(_Bool)arg1;	// IMP=0x0010000000a1ef75
- (void)_updateFromModel:(_Bool)arg1;	// IMP=0x0010000000a1ed74

@end

