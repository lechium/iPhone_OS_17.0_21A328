//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage.h>

@class GEOStyleAttribute, NSObject, NSURL;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MKSearchFoundationImage : SFImage
{
    NSObject<OS_dispatch_group> *_group;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    GEOStyleAttribute *_styleAttribute;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a8a84
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a89cf
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a8932
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a8855
- (id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2;	// IMP=0x00000000001a8555

@end

