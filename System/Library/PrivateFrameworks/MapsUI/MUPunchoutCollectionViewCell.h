//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MUPunchoutView, MUPunchoutViewModel, NSString;

__attribute__((visibility("hidden")))
@interface MUPunchoutCollectionViewCell : UICollectionViewCell
{
    MUPunchoutView *_punchoutView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x001000000008a64f
- (void).cxx_destruct;	// IMP=0x000000000008a661
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x000000000008a632
- (void)beginAnimatingActivityIndicator;	// IMP=0x000000000008a615
@property(retain, nonatomic) MUPunchoutViewModel *viewModel;
- (void)_setupContentView;	// IMP=0x000000000008a49c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008a3f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
