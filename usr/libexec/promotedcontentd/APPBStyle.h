//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class APPBBorderStyle, APPBButtonStyle, APPBColor, APPBShadowStyle;

@interface APPBStyle : PBCodable
{
    APPBColor *_backgroundColor;	// 8 = 0x8
    APPBBorderStyle *_borderStyle;	// 16 = 0x10
    APPBButtonStyle *_buttonStyle;	// 24 = 0x18
    APPBShadowStyle *_shadowStyle;	// 32 = 0x20
    APPBColor *_textColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000ae4c9
@property(retain, nonatomic) APPBColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) APPBShadowStyle *shadowStyle; // @synthesize shadowStyle=_shadowStyle;
@property(retain, nonatomic) APPBButtonStyle *buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) APPBBorderStyle *borderStyle; // @synthesize borderStyle=_borderStyle;
@property(retain, nonatomic) APPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ae2df
- (unsigned long long)hash;	// IMP=0x00100000000ae240
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ae108
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000adff0
- (void)copyTo:(id)arg1;	// IMP=0x00100000000adf2d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ade79
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ade6c
- (id)dictionaryRepresentation;	// IMP=0x00100000000ad9ec
- (id)description;	// IMP=0x00100000000ad93d
@property(readonly, nonatomic) _Bool hasTextColor;
@property(readonly, nonatomic) _Bool hasShadowStyle;
@property(readonly, nonatomic) _Bool hasButtonStyle;
@property(readonly, nonatomic) _Bool hasBorderStyle;
@property(readonly, nonatomic) _Bool hasBackgroundColor;

@end

