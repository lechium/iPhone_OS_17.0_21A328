//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICMusicLibraryContentMetadataDescriptor : NSObject
{
    NSString *_title;	// 8 = 0x8
    long long _storeAdamID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000105cd0
@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)debugDescription;	// IMP=0x0010000000105c25
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000105b28
- (id)initWithTitle:(id)arg1 andStoreAdamID:(long long)arg2;	// IMP=0x0010000000105aa1

@end

