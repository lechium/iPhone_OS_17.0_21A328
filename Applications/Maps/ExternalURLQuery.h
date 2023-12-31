//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ExternalURLQuery : NSObject
{
    int _resultProviderId;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    NSString *_contentProvider;	// 32 = 0x20
    struct CLLocationCoordinate2D _coordinate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000009110b2
@property(readonly, copy, nonatomic) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(readonly, nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000911014
- (_Bool)isEqualToExternalURLQuery:(id)arg1;	// IMP=0x0010000000910d29
- (unsigned long long)hash;	// IMP=0x0010000000910a9c
- (id)description;	// IMP=0x001000000091094a
- (id)initWithQuery:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;	// IMP=0x001000000091085f

@end

