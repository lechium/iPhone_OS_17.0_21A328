//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, UIColor;

@interface MapsUIImageContactSpec
{
    _Bool _useAvatarImageRendered;	// 10 = 0xa
    CNContact *_contact;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    double _size;	// 32 = 0x20
    UIColor *_tintColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000007f05f1
@property(nonatomic) _Bool useAvatarImageRendered; // @synthesize useAvatarImageRendered=_useAvatarImageRendered;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)description;	// IMP=0x00100000007f0447
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000007f0281
- (unsigned long long)hash;	// IMP=0x00100000007f0103
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007f0013
- (id)imageForScale:(double)arg1 isCarPlay:(_Bool)arg2;	// IMP=0x00100000007efddf
- (_Bool)useSearchImageFallback;	// IMP=0x00100000007efdd7
- (id)init;	// IMP=0x00100000007efd65

@end

