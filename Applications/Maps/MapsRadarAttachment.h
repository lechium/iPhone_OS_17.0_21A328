//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MapsRadarAttachment : NSObject
{
    NSString *_fileName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008fb2ac
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000008fb286
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *temporaryFileURL;
- (id)initWithFileName:(id)arg1;	// IMP=0x00100000008faad5

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

