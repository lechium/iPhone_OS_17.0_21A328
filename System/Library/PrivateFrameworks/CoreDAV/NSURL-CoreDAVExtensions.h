//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)arg1;	// IMP=0x008000000003a8de
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;	// IMP=0x008000000003a134
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;	// IMP=0x008000000003a035
- (_Bool)CDVIsSafeRedirectForRequestURL:(id)arg1;	// IMP=0x001000000003b61d
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;	// IMP=0x001000000003b557
- (id)CDVFileSystemSafePath;	// IMP=0x001000000003b453
- (_Bool)CDVIsEqualToURL:(id)arg1;	// IMP=0x001000000003b320
- (id)CDVServerURLWithPath:(_Bool)arg1;	// IMP=0x001000000003b1cd
- (id)CDVServerURL;	// IMP=0x001000000003b008
- (id)CDVURLByDeletingLastPathComponent;	// IMP=0x001000000003af3c
- (id)CDVRawLastPathComponentPreservingEscapes;	// IMP=0x001000000003aeec
- (id)CDVRawLastPathComponent;	// IMP=0x001000000003ae1b
- (id)CDVRawPath;	// IMP=0x001000000003ae09
- (id)CDVPassword;	// IMP=0x001000000003adb9
- (id)CDVURLWithPath:(id)arg1;	// IMP=0x001000000003ac50
- (id)CDVURLWithPassword:(id)arg1;	// IMP=0x001000000003aae7
- (id)CDVURLWithUser:(id)arg1;	// IMP=0x001000000003a985
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 query:(id)arg7 fragment:(id)arg8;	// IMP=0x001000000003a481
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;	// IMP=0x001000000003a455
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(_Bool)arg7;	// IMP=0x001000000003a200
@end
