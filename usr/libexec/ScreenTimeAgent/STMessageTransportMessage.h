//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol STMessageTransportMessageContent;

@interface STMessageTransportMessage : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    long long _contentType;	// 16 = 0x10
    NSObject<STMessageTransportMessageContent> *_content;	// 24 = 0x18
}

+ (Class)_contentClassForContentType:(long long)arg1;	// IMP=0x002000000005ab52
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000005ab4a
- (void).cxx_destruct;	// IMP=0x002000000005ade6
@property(readonly, copy) NSObject<STMessageTransportMessageContent> *content; // @synthesize content=_content;
@property(readonly) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x001000000005ad70
- (_Bool)isEqualToMessage:(id)arg1;	// IMP=0x001000000005ac3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005abd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005ab8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005aac5
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000005a9ca
- (id)description;	// IMP=0x001000000005a8e8
- (id)initWithIdentifier:(id)arg1 content:(id)arg2;	// IMP=0x001000000005a813

@end

