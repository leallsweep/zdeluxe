#!/bin/sh

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
BUILD="$ROOT/build"

mkdir -p "$BUILD"

cmake -S "$ROOT" -B "$BUILD" || exit 1
cmake --build "$BUILD" || exit 1
