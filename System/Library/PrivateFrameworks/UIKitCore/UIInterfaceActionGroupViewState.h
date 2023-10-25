//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState
{
    _Bool _isVerticalLayoutAxis;	// 32 = 0x20
    long long _resolvedPresentationStyle;	// 40 = 0x28
}

@property(readonly, nonatomic) long long resolvedPresentationStyle; // @synthesize resolvedPresentationStyle=_resolvedPresentationStyle;
@property(readonly, nonatomic) _Bool isVerticalLayoutAxis; // @synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis;
- (_Bool)_stateEqualToGroupViewState:(id)arg1;	// IMP=0x00000000000d8d24
- (void)_collectStateFromGroupViewState:(id)arg1;	// IMP=0x00000000000d8cbc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8c63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8c15
- (id)description;	// IMP=0x00000000000d8b22
- (id)copyWithResolvedPresentationStyle:(long long)arg1;	// IMP=0x00000000000d8afa
- (id)copyWithVerticalLayoutAxis:(_Bool)arg1;	// IMP=0x00000000000d8ad4
- (id)init;	// IMP=0x00000000000d8a86

@end
