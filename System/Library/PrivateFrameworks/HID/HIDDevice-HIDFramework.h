//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IOKit/HIDDevice.h>

@interface HIDDevice (HIDFramework)
@property(readonly) unsigned int service;
- (void)cancel;	// IMP=0x0030000000003db4
- (void)activate;	// IMP=0x0030000000003c88
- (void)close;	// IMP=0x0030000000003c7c
- (_Bool)openWithOptions:(long long)arg1 error:(out id *)arg2;	// IMP=0x0030000000003c29
- (void)open;	// IMP=0x0030000000003c1d
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0030000000003c10
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x0030000000003c03
- (void)setInputReportHandler:(CDUnknownBlockType)arg1;	// IMP=0x0030000000003a2f
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;	// IMP=0x003000000000394b
- (void)setBatchInputElementHandler:(CDUnknownBlockType)arg1;	// IMP=0x00300000000037b0
- (void)setInputElementHandler:(CDUnknownBlockType)arg1;	// IMP=0x00300000000036c0
- (void)setInputElementMatching:(id)arg1;	// IMP=0x003000000000358f
- (_Bool)commitElements:(id)arg1 direction:(long long)arg2 error:(out id *)arg3 timeout:(long long)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x003000000000345f
- (_Bool)commitElements:(id)arg1 direction:(long long)arg2 error:(out id *)arg3;	// IMP=0x0030000000003439
- (_Bool)getReport:(void *)arg1 reportLength:(long long *)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5 timeout:(long long)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x0030000000003334
- (_Bool)getReport:(void *)arg1 reportLength:(long long *)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5;	// IMP=0x0030000000003309
- (_Bool)setReport:(const void *)arg1 reportLength:(long long)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5 timeout:(long long)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x00300000000031c4
- (_Bool)setReport:(const void *)arg1 reportLength:(long long)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id *)arg5;	// IMP=0x0030000000003199
- (id)elementsMatching:(id)arg1;	// IMP=0x0030000000003182
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;	// IMP=0x003000000000316e
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x003000000000315b
- (id)propertyForKey:(id)arg1;	// IMP=0x003000000000314e
- (id)initWithService:(unsigned int)arg1;	// IMP=0x003000000000311f
@end

