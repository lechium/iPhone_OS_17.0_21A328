//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INWidgetPlistRepresentable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSObject-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol INGenericIntent <NSObject, NSCopying, NSSecureCoding, INWidgetPlistRepresentable>
@property(copy, nonatomic) NSDictionary *parametersByName;
@property(copy, nonatomic) NSString *verb;
@property(copy, nonatomic) NSString *domain;
- (_Bool)isGenericIntent;
@end

