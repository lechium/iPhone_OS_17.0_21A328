//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNVisualFingerprint, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface _CNAvatarPosterCarouselLikenessFingerprintPosterSnapshotImpl : NSObject
{
    CNVisualFingerprint *_visualFingerprint;	// 8 = 0x8
    UIColor *_titleColor;	// 16 = 0x10
    UIFont *_titleFont;	// 24 = 0x18
    unsigned long long _preferredTitleAlignment;	// 32 = 0x20
    unsigned long long _preferredTitleLayout;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000213d93
+ (id)fingerprintForPosterConfiguration:(id)arg1 withVisualFingerprint:(id)arg2;	// IMP=0x0010000000213cff
- (void).cxx_destruct;	// IMP=0x0000000000213ccc
@property(nonatomic) unsigned long long preferredTitleLayout; // @synthesize preferredTitleLayout=_preferredTitleLayout;
@property(nonatomic) unsigned long long preferredTitleAlignment; // @synthesize preferredTitleAlignment=_preferredTitleAlignment;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) CNVisualFingerprint *visualFingerprint; // @synthesize visualFingerprint=_visualFingerprint;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000213b1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000213a6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000213a5f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021386a
@property(readonly, copy) NSString *description;
- (id)initWithVisualFingerprint:(id)arg1 titleColor:(id)arg2 titleFont:(id)arg3 preferredTitleLayout:(unsigned long long)arg4 preferredTitleAlignment:(unsigned long long)arg5;	// IMP=0x0000000000213690
- (id)initWithVisualFingerprint:(id)arg1 titleStyleAttributes:(id)arg2;	// IMP=0x00000000002135ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
