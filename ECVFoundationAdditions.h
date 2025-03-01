/* Copyright (c) 2007-2009, Ben Trask
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY BEN TRASK ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL BEN TRASK BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
#import <Foundation/Foundation.h>

@interface NSBundle(ECVFoundationAdditions)

- (NSString *)ECV_mainSuiteName;

@end

@interface NSDate(ECVFoundationAdditions)

//+ (NSTimeInterval)ECV_timeIntervalSinceReferenceDate;

@end

@interface NSObject(ECVFoundationAdditions)

+ (void *)ECV_useInstance:(BOOL)instance implementationFromClass:(Class)class forSelector:(SEL)aSel;

- (void)ECV_addObserver:(id)observer selector:(SEL)aSelector name:(NSString *)aName;
- (void)ECV_removeObserver:(id)observer name:(NSString *)aName;

@end

@interface NSProcessInfo(ECVFoundationAdditions)

- (void)ECV_enableSuddenTermination;
- (void)ECV_disableSuddenTermination;

@end
