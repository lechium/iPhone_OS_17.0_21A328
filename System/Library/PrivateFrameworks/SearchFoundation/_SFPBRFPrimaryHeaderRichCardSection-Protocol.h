//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@protocol _SFPBRFPrimaryHeaderRichCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property(retain, nonatomic) _SFPBRFTextProperty *text_4;
@property(retain, nonatomic) _SFPBRFTextProperty *text_3;
@property(retain, nonatomic) _SFPBRFTextProperty *text_2;
@property(retain, nonatomic) _SFPBRFTextProperty *text_1;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
