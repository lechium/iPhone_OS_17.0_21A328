//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkMessage : PBCodable
{
    int _action;	// 8 = 0x8
    NSString *_bundleId;	// 16 = 0x10
    NSMutableArray *_businessLinkContents;	// 24 = 0x18
    NSMutableArray *_categoryStyleAttributes;	// 32 = 0x20
    NSString *_heroImage;	// 40 = 0x28
    NSString *_iconImage;	// 48 = 0x30
    NSString *_link;	// 56 = 0x38
    NSString *_muid;	// 64 = 0x40
    NSString *_redirectUrl;	// 72 = 0x48
    _Bool _isPoweredBy;	// 80 = 0x50
    struct {
        unsigned int action:1;
        unsigned int isPoweredBy:1;
    } _has;	// 84 = 0x54
}

+ (Class)categoryStyleAttributesType;	// IMP=0x001000000003ee41
+ (Class)businessLinkContentsType;	// IMP=0x001000000003ebc2
- (void).cxx_destruct;	// IMP=0x0000000000040a3a
@property(retain, nonatomic) NSMutableArray *categoryStyleAttributes; // @synthesize categoryStyleAttributes=_categoryStyleAttributes;
@property(retain, nonatomic) NSString *muid; // @synthesize muid=_muid;
@property(nonatomic) _Bool isPoweredBy; // @synthesize isPoweredBy=_isPoweredBy;
@property(retain, nonatomic) NSMutableArray *businessLinkContents; // @synthesize businessLinkContents=_businessLinkContents;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *heroImage; // @synthesize heroImage=_heroImage;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000405c1
- (unsigned long long)hash;	// IMP=0x0000000000040484
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040262
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003fe31
- (void)copyTo:(id)arg1;	// IMP=0x000000000003fbe5
- (void)writeTo:(id)arg1;	// IMP=0x000000000003f8d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003f8cc
- (id)dictionaryRepresentation;	// IMP=0x000000000003ef01
- (id)description;	// IMP=0x000000000003ee52
- (id)categoryStyleAttributesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003ee24
- (unsigned long long)categoryStyleAttributesCount;	// IMP=0x000000000003ee07
- (void)addCategoryStyleAttributes:(id)arg1;	// IMP=0x000000000003ed9d
- (void)clearCategoryStyleAttributes;	// IMP=0x000000000003ed80
@property(readonly, nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasIsPoweredBy;
- (int)StringAsAction:(id)arg1;	// IMP=0x000000000003ec85
- (id)actionAsString:(int)arg1;	// IMP=0x000000000003ec3a
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
- (id)businessLinkContentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003eba5
- (unsigned long long)businessLinkContentsCount;	// IMP=0x000000000003eb88
- (void)addBusinessLinkContents:(id)arg1;	// IMP=0x000000000003eb1e
- (void)clearBusinessLinkContents;	// IMP=0x000000000003eb01
@property(readonly, nonatomic) _Bool hasRedirectUrl;
@property(readonly, nonatomic) _Bool hasIconImage;
@property(readonly, nonatomic) _Bool hasHeroImage;
@property(readonly, nonatomic) _Bool hasBundleId;
@property(readonly, nonatomic) _Bool hasLink;

@end
