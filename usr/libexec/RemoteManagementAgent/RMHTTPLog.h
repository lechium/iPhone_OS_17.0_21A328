//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMHTTPLog : NSObject
{
}

+ (id)_logDirectoryForEnrollmentToken:(id)arg1;	// IMP=0x004000000004b705
+ (void)_writeRequestLogToURL:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;	// IMP=0x001000000004ab56
+ (void)logHTTPDetailsForEnrollmentToken:(id)arg1 request:(id)arg2 response:(id)arg3 responseURL:(id)arg4 responseError:(id)arg5;	// IMP=0x001000000004a9fd
+ (void)logHTTPDetailsForEnrollmentToken:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;	// IMP=0x001000000004a8fb

@end

