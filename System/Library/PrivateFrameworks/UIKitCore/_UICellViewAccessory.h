//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UICellViewAccessory
{
    long long _options;	// 40 = 0x28
}

+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 reservedLayoutWidth:(double)arg4;	// IMP=0x0060000001247249
+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3;	// IMP=0x0060000001247234
@property(nonatomic) long long options; // @synthesize options=_options;
- (_Bool)alwaysNeedsLayout;	// IMP=0x00000000012474cd
- (void)setView:(id)arg1;	// IMP=0x00000000012474bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012473c2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000012472fb

@end
