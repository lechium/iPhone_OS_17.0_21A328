//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLiOSInspectorButton;

@interface CRLiOSInspectorButtonCell
{
}

+ (id)cellWithButton:(id)arg1;	// IMP=0x00200000002a8ccf
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00200000002a8e3a
@property(readonly, nonatomic) _Bool isUserCurrentlyInteracting;
- (void)prepareForReuse;	// IMP=0x00100000002a8d81
@property(readonly, nonatomic) CRLiOSInspectorButton *button;
- (id)initWithButton:(id)arg1 uniqueIdentifier:(id)arg2;	// IMP=0x00100000002a8ba9

@end

