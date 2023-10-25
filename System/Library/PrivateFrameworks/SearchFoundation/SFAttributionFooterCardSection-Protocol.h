//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, SFPunchout, SFRichText;

@protocol SFAttributionFooterCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFPunchout *trailingAttributionPunchout;
@property(retain, nonatomic) SFRichText *trailingAttribution;
@property(retain, nonatomic) SFPunchout *leadingAttributionPunchout;
@property(retain, nonatomic) SFRichText *leadingAttribution;
@property(copy, nonatomic) NSString *type;
@end
