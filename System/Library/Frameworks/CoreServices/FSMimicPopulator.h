//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FSMimic, FSNode;

__attribute__((visibility("hidden")))
@interface FSMimicPopulator : NSObject
{
    FSNode *_node;	// 8 = 0x8
    FSMimic *_mimic;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c0707
@property(readonly, nonatomic) FSMimic *mimic; // @synthesize mimic=_mimic;
- (_Bool)populateHFSTypeAndCreatorWithError:(id *)arg1;	// IMP=0x00000000000c05bb
- (void)populateHasChildNodeWithRelativePath:(id)arg1;	// IMP=0x00000000000c0558
- (_Bool)populateValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c045c
- (_Bool)populateSimpleSelector:(SEL)arg1 error:(id *)arg2;	// IMP=0x00000000000c0012
- (id)initWithNode:(id)arg1;	// IMP=0x00000000000bff12

@end
